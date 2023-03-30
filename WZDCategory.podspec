#
# Be sure to run `pod lib lint WZDCategory.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see https://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
    s.name             = 'WZDCategory'
    s.version          = '1.0'
    s.summary          = 'A short description of WZDCategory.'
    s.description      = <<-DESC
    TODO: Add long description of the pod here.
    DESC
    s.homepage         = 'https://github.com/w735786589/WZDCategory'
    s.license          = { :type => 'MIT', :file => 'LICENSE' }
    s.author           = { 'w735786589' => 'w735786589@163.com' }
    s.source           = { :git => 'https://github.com/w735786589/WZDCategory.git', :tag => s.version.to_s }
    s.ios.deployment_target = '10.0'
    s.platform       = :ios
    s.platform       = :ios, "11.0"
    s.exclude_files  = "Classes/Exclude"
    s.resource       = 'WZDCategory/MBProgressHUD.bundle'
    s.dependency "Masonry"
    s.dependency "MBProgressHUD"
    s.source_files = 'WZDCategory/Classes/**/*'
  
end
