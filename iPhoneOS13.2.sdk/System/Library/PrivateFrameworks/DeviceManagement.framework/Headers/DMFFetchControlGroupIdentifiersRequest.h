//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DeviceManagement/DMFTaskRequest.h>

@class NSString;

@interface DMFFetchControlGroupIdentifiersRequest : DMFTaskRequest
{
    _Bool _includeTemporary;
    NSString *_leaderIdentifier;
}

+ (_Bool)supportsSecureCoding;
+ (Class)whitelistedClassForResultObject;
@property(nonatomic) _Bool includeTemporary; // @synthesize includeTemporary=_includeTemporary;
@property(copy, nonatomic) NSString *leaderIdentifier; // @synthesize leaderIdentifier=_leaderIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

