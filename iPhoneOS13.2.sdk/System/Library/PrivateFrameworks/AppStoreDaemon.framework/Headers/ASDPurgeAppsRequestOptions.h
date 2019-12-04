//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppStoreDaemon/ASDRequestOptions.h>

@class NSArray, NSNumber, NSString;

@interface ASDPurgeAppsRequestOptions : ASDRequestOptions
{
    _Bool _offloadOnly;
    _Bool _performAvailablityCheck;
    NSArray *_apps;
    NSNumber *_desiredPurgeAmount;
    long long _urgency;
    NSString *_volume;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSString *volume; // @synthesize volume=_volume;
@property(nonatomic) long long urgency; // @synthesize urgency=_urgency;
@property(nonatomic) _Bool performAvailablityCheck; // @synthesize performAvailablityCheck=_performAvailablityCheck;
@property(nonatomic) _Bool offloadOnly; // @synthesize offloadOnly=_offloadOnly;
@property(copy, nonatomic) NSNumber *desiredPurgeAmount; // @synthesize desiredPurgeAmount=_desiredPurgeAmount;
@property(copy, nonatomic) NSArray *apps; // @synthesize apps=_apps;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithVolume:(id)arg1 urgency:(long long)arg2;

@end

