//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>



@class NSDictionary, NSString;

@interface AXBuddyDataPackage : NSObject <NSSecureCoding>
{
    _Bool _usesExtendedSlider;
    NSDictionary *_accessibilityOptions;
    NSString *_axOSVersion;
    NSString *_axModel;
    NSString *_axPreferredContentSizeCategoryName;
}

+ (void)restoreDataBlobForBuddy:(id)arg1;
+ (id)dataBlobForBuddy;
+ (id)deviceClassForBuddy;
+ (id)productVersionForBuddy;
+ (void)setTestData:(id)arg1 forModel:(id)arg2 hasHomeButton:(_Bool)arg3 largeTextUsesExtendedRange:(_Bool)arg4;
+ (id)dataPackageForCurrentSettings;
+ (_Bool)supportsSecureCoding;
+ (void)setTestData:(id)arg1;
+ (id)testData;
@property(nonatomic) _Bool usesExtendedSlider; // @synthesize usesExtendedSlider=_usesExtendedSlider;
@property(retain, nonatomic) NSString *axPreferredContentSizeCategoryName; // @synthesize axPreferredContentSizeCategoryName=_axPreferredContentSizeCategoryName;
@property(retain, nonatomic) NSString *axModel; // @synthesize axModel=_axModel;
@property(retain, nonatomic) NSString *axOSVersion; // @synthesize axOSVersion=_axOSVersion;
@property(retain, nonatomic) NSDictionary *accessibilityOptions; // @synthesize accessibilityOptions=_accessibilityOptions;
- (void)processDomainDictionary:(id)arg1;
- (void)applySavedSettings;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

