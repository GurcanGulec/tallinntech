static bool cl_block_try_disable_access(cl_block* block, int discard_data) 
{  
    if (!cl_try_lock(&block->writer_lock)) 
    {    
        return false;  
    }  
    if (!cl_try_lock(&block->reader_lock)) 
    {   
        icl_unlock(&block->writer_lock);
        return false;  
    }  
    if (!discard_data && (block->bytes_read != cl_block_get_bytes_committed(block)))
    {    
        cl_unlock(&block->reader_lock);
        cl_unlock(&block->writer_lock);    
        return false;  
    }  
    
    cl_block_set_bytes_committed(block, 0);  
    block->bytes_read = 0;  

    return true;
}

static void cl_block_enable_access(cl_block* block) 
{  
    cl_unlock(&block->reader_lock);  
    cl_unlock(&block->writer_lock);
}
