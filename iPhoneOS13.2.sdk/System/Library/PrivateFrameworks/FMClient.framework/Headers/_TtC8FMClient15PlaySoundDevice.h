//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>



@class NSString;

@interface _TtC8FMClient15PlaySoundDevice : NSObject <NSSecureCoding>
{
    // Error parsing type: , name: serverId
    // Error parsing type: , name: locality
    // Error parsing type: , name: safetyWarningConfirmed
}

+ (_Bool)supportsSecureCoding;
+ (id)PlaySoundDeviceLocalityUnknown;
+ (id)PlaySoundDeviceLocalityRemote;
+ (id)PlaySoundDeviceLocalityLocal;
- (id)init;
@property(nonatomic, readonly) NSString *description;
@property(nonatomic, readonly) NSString *debugDescription;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithServerId:(id)arg1 locality:(id)arg2 safetyWarningConfirmed:(_Bool)arg3;
@property(nonatomic, readonly) _Bool safetyWarningConfirmed; // @synthesize safetyWarningConfirmed;
@property(nonatomic, readonly) NSString *locality;
@property(nonatomic, readonly) NSString *serverId;

@end

