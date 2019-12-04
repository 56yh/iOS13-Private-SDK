//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>




@class HKFHIRIdentifier, NSDate, NSURL;

@interface HDFHIRResourceLastSeenObject : NSObject <NSCopying, NSSecureCoding>
{
    HKFHIRIdentifier *_resourceIdentifier;
    NSURL *_sourceURL;
    NSDate *_lastSeenDate;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, copy, nonatomic) NSDate *lastSeenDate; // @synthesize lastSeenDate=_lastSeenDate;
@property(readonly, copy, nonatomic) NSURL *sourceURL; // @synthesize sourceURL=_sourceURL;
@property(readonly, copy, nonatomic) HKFHIRIdentifier *resourceIdentifier; // @synthesize resourceIdentifier=_resourceIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithResourceIdentifier:(id)arg1 sourceURL:(id)arg2 lastSeenDate:(id)arg3;

@end

