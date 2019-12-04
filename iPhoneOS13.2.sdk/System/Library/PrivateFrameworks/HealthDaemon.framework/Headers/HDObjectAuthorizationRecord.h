//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>



@class NSUUID;

@interface HDObjectAuthorizationRecord : NSObject <NSSecureCoding>
{
    NSUUID *_objectID;
    NSUUID *_sourceID;
    long long _status;
    double _modificationDate;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) double modificationDate; // @synthesize modificationDate=_modificationDate;
@property(nonatomic) long long status; // @synthesize status=_status;
@property(copy, nonatomic) NSUUID *sourceID; // @synthesize sourceID=_sourceID;
@property(copy, nonatomic) NSUUID *objectID; // @synthesize objectID=_objectID;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)init;

@end

