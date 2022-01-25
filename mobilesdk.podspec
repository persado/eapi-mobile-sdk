Pod::Spec.new do |spec|
    spec.name                     = 'mobilesdk'
    spec.version                  = '0.1.0-SNAPSHOT'
    spec.homepage                 = 'https://github.com/persado/eapi-mobile-sdk'
    spec.source                   = { :git => "Not Published", :tag => "Cocoapods/#{spec.name}/#{spec.version}" }
    spec.authors                  = 'Maria Makantasi => maria.makantasi@persado.com'
    spec.license                  = ''
    spec.summary                  = 'Mobilesdk is an api client for persadoAPI for serving and tracking'

    spec.vendored_frameworks      = "frameworks/Release/mobilesdk.framework"
    spec.libraries                = "c++"
    spec.module_name              = "#{spec.name}_umbrella"

    spec.ios.deployment_target = '15.2'

                

#     spec.pod_target_xcconfig = {
#         'KOTLIN_PROJECT_PATH' => ':mobilesdk',
#         'PRODUCT_MODULE_NAME' => 'mobilesdk',
#     }

#     spec.script_phases = [
#         {
#             :name => 'Build mobilesdk',
#             :execution_position => :before_compile,
#             :shell_path => '/bin/sh',
#             :script => <<-SCRIPT
#                 if [ "YES" = "$COCOAPODS_SKIP_KOTLIN_BUILD" ]; then
#                   echo "Skipping Gradle build task invocation due to COCOAPODS_SKIP_KOTLIN_BUILD environment variable set to \"YES\""
#                   exit 0
#                 fi
#                 set -ev
#                 REPO_ROOT="$PODS_TARGET_SRCROOT"
#                 "$REPO_ROOT/../gradlew" -p "$REPO_ROOT" $KOTLIN_PROJECT_PATH:syncFramework \
#                     -Pkotlin.native.cocoapods.platform=$PLATFORM_NAME \
#                     -Pkotlin.native.cocoapods.archs="$ARCHS" \
#                     -Pkotlin.native.cocoapods.configuration=$CONFIGURATION
#             SCRIPT
#         }
#     ]
end
