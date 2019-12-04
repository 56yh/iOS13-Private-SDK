//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface TSCHStyleOwnerUUIDEncoder : NSObject
{
    unsigned char mUUID[16];
    unsigned long long mIndex;
}

+ (id)UUIDEncoder;
+ (id)UUIDEncoderWithStyleOwnerPathType:(unsigned char)arg1;
+ (id)styleOwnerBaseUUID;
+ (id)styleOwnerBaseUUIDString;
- (id)encodedUUID;
- (void)encodeUInt64FromNSUInteger:(unsigned long long)arg1;
- (void)encodeUInt64:(unsigned long long)arg1;
- (void)encodeByte:(unsigned char)arg1;
- (_Bool)hasSpaceToEncodeNumberOfBytes:(unsigned long long)arg1;
- (id)init;

@end

