bash build.sh

# Clear cache
/System/Library/Frameworks/CoreServices.framework/Versions/A/Frameworks/LaunchServices.framework/Versions/A/Support/lsregister -f macos/Shambles.app

open -n macos/Shambles.app
