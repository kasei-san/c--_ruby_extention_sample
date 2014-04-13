require 'rubygems'
require 'rbplusplus'
include RbPlusPlus

Extension.new 'test' do |e|
  pwd = File.expand_path(File.dirname(__FILE__))
  e.sources(
    File.join(pwd, 'include', 'test.h'),
    :include_paths => File.join(pwd, 'include'),
    :library_paths => File.join(pwd, 'lib'),
    :libraries => 'libtest.o'
  )
  e.namespace 'MyLib'
end
