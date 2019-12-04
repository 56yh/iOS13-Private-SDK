//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>




@class NSString;

@interface DMFUser : NSObject <NSCopying, NSSecureCoding>
{
    _Bool _hasDataToSync;
    _Bool _isCurrentUser;
    NSString *_username;
    unsigned long long _dataQuota;
    unsigned long long _dataUsed;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) _Bool isCurrentUser; // @synthesize isCurrentUser=_isCurrentUser;
@property(readonly, nonatomic) _Bool hasDataToSync; // @synthesize hasDataToSync=_hasDataToSync;
@property(readonly, nonatomic) unsigned long long dataUsed; // @synthesize dataUsed=_dataUsed;
@property(readonly, nonatomic) unsigned long long dataQuota; // @synthesize dataQuota=_dataQuota;
@property(readonly, copy, nonatomic) NSString *username; // @synthesize username=_username;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithUsername:(id)arg1 dataQuota:(unsigned long long)arg2 dataUsed:(unsigned long long)arg3 hasDataToSync:(_Bool)arg4 isCurrentUser:(_Bool)arg5;

@end

