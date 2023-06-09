#
# Be sure to run `pod lib lint WZDCategory.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see https://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
    s.name             = 'WZDCategory'
    s.version          = '1.1'
    s.summary          = 'A short description of WZDCategory.'
    # This description is used to generate tags and improve search results.
    #   * Think: What does it do? Why did you write it? What is the focus?
    #   * Try to keep it short, snappy and to the point.
    #   * Write the description between the DESC delimiters below.
    #   * Finally, don't worry about the indent, CocoaPods strips it!

    s.description      = <<-DESC
    The Custom Extension Class.
    DESC
    s.homepage         = 'https://github.com/w735786589/WZDCategory'
    s.license          = { :type => 'MIT', :file => 'LICENSE' }
    s.author           = { 'w735786589' => 'w735786589@163.com' }
    s.source           = { :git => 'https://github.com/w735786589/WZDCategory.git', :tag => s.version.to_s }
#    s.platform       = :ios
    s.platform       = :ios, "11.0"
#
    s.dependency "Masonry","~> 1.1.0"
    s.dependency "MBProgressHUD","~> 1.2.0"
    s.source_files = 'WZDCategory/Classes/**/*'
#    s.resources       = '/MBProgressHUD.bundle'
end
