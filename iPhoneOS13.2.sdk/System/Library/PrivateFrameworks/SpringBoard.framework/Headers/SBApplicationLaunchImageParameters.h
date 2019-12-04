//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SBApplicationLaunchImageParameters : NSObject
{
    NSString *_defaultPNGName;
    NSString *_extension;
    NSString *_minOSVersionString;
    struct CGSize _size;
    long long _interfaceOrientation;
}

+ (id)_sanitizedImageNameFromName:(id)arg1 withExtension:(id)arg2 actualExtension:(out id *)arg3;
+ (id)validInfoPlistOrientationKeys;
+ (id)launchImageParametersFromLaunchImagesInfo:(id)arg1 withBundleIdentifier:(id)arg2 isMonarchLinked:(_Bool)arg3;
@property(readonly, nonatomic) long long interfaceOrientation; // @synthesize interfaceOrientation=_interfaceOrientation;
@property(readonly, nonatomic) struct CGSize size; // @synthesize size=_size;
@property(readonly, copy, nonatomic) NSString *minOSVersionString; // @synthesize minOSVersionString=_minOSVersionString;
@property(readonly, copy, nonatomic) NSString *extension; // @synthesize extension=_extension;
@property(readonly, copy, nonatomic) NSString *defaultPNGName; // @synthesize defaultPNGName=_defaultPNGName;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)_initWithDefaultPNGName:(id)arg1 extension:(id)arg2 minOSVersionString:(id)arg3 size:(struct CGSize)arg4 interfaceOrientation:(long long)arg5;
- (id)init;

@end

