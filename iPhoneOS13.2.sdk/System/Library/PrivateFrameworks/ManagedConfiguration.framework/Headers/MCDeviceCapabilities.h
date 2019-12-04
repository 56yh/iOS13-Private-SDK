//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface MCDeviceCapabilities : NSObject
{
    _Bool _supportsBlockLevelEncryption;
    _Bool _supportsFileLevelEncryption;
}

+ (id)currentDevice;
@property(readonly, nonatomic) _Bool supportsFileLevelEncryption; // @synthesize supportsFileLevelEncryption=_supportsFileLevelEncryption;
@property(readonly, nonatomic) _Bool supportsBlockLevelEncryption; // @synthesize supportsBlockLevelEncryption=_supportsBlockLevelEncryption;
- (_Bool)validateCapabilitiesRequiredByRestrictions:(id)arg1 localizedIncompatibilityMessage:(id)arg2 outError:(id *)arg3;
- (id)init;
- (_Bool)_mediaDiskIsEncrypted;

@end
