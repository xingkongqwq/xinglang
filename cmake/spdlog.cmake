include(FetchContent)
 
set(SPDLOG_GIT_TAG  v1.9.2)
set(SPDLOG_GIT_URL  https://github.com/gabime/spdlog.git)
 
FetchContent_Declare(
  spdlog
  GIT_REPOSITORY    ${SPDLOG_GIT_URL}
  GIT_TAG           ${SPDLOG_GIT_TAG}
)

FetchContent_MakeAvailable(spdlog)