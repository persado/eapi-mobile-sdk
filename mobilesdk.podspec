Pod::Spec.new do |spec|
    spec.name                     = 'mobilesdk'
    spec.version                  = '0.3.0'
    spec.homepage                 = 'https://github.com/persado/eapi-mobile-sdk'
    spec.source                   = { :git => "Not Published", :tag => "Cocoapods/#{spec.name}/#{spec.version}" }
    spec.authors                  = 'Maria Makantasi => maria.makantasi@persado.com'
    spec.license                  = ''
    spec.summary                  = 'Mobilesdk is an api client for persadoAPI for serving and tracking'
    spec.libraries                = "c++"
    spec.module_name              = "#{spec.name}_umbrella"
    spec.subspec 'Debug' do |ss|
        ss.ios.deployment_target = '16.1'
        ss.vendored_frameworks = 'frameworks/debug/mobilesdk.framework'
    end

    spec.subspec 'DebugSimulator' do |ss|
        ss.ios.deployment_target = '16.1'
        ss.vendored_frameworks = 'frameworks/debug/simulator/mobilesdk.framework'
    end

    spec.subspec 'Release' do |ss|
        ss.ios.deployment_target = '16.1'
        ss.vendored_frameworks = 'frameworks/release/mobilesdk.framework'
    end

    spec.subspec 'ReleaseSimulator' do |ss|
        ss.ios.deployment_target = '16.1'
        ss.vendored_frameworks = 'frameworks/release/simulator/mobilesdk.framework'
    end
end
