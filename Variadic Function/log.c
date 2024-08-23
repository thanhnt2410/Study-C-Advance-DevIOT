typedef enum {
    LOG_LEVEL_ERROR,
    LOG_LEVEL_WARNING,
    LOG_LEVEL_INFO,
    LOG_LEVEL_DEBUG
}   log_level_t;

#define NRF_LOG_ENABLE              1
#define NRF_LOG_DEFAULT_LEVEL       LOG_LEVEL_DEBUG

#define END_OF_LINE_STRING "\r\n"
#define LOG_ERROR(...)  LOG_INTERNAL_ERROR(__VA_ARGS__)
#define LOG_WARNING(...) LOG_INTERNAL_WARNING(__VA_ARGS__)
#define LOG_INFO(...) LOG_INTERNAL_INFO(__VA_ARGS__)
#define LOG_DEBUG(...) LOG_INTERNAL_DEBUG(__VA_ARGS__)

#define LOG_INTERNAL_ERROR(...) LOG_INTERNAL_MODULE(LOG_LEVEL_ERROR,__VA_ARGS__)
#define LOG_INTERNAL_WARNING(...) LOG_INTERNAL_MODULE(LOG_LEVEL_WARNING,__VA_ARGS__)
#define LOG_INTERNAL_INFO(...) LOG_INTERNAL_MODULE(LOG_LEVEL_INFO,__VA_ARGS__)
#define LOG_INTERNAL_DEBUG(...) LOG_INTERNAL_MODULE(LOG_LEVEL_DEBUG,__VA_ARGS__)

#define LOG_INTERNAL_MODULE(level, ...)\
    if(NRF_LOG_ENABLE && (level <= NRF_LOG_DEFAULT_LEVEL))\
    {\
        printf(__VA_ARGS__);\
    }

int main()
{
    LOG_ERROR("level of errof is %d\n", LOG_LEVEL_ERROR);
    LOG_WARNING("level of warning is %d\n", LOG_LEVEL_WARNING);
    LOG_INFO("level of info is %d\n", LOG_LEVEL_INFO);
    LOG_DEBUG("level of debug is %d\n", LOG_LEVEL_DEBUG);
    return 0;
}
