//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CATTaskRequest.h"

@class NSDictionary;

@interface CRKSetAdHocConfigurationRequest : CATTaskRequest
{
    _Bool _merge;
    NSDictionary *_configuration;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) _Bool merge; // @synthesize merge=_merge;
@property(copy, nonatomic) NSDictionary *configuration; // @synthesize configuration=_configuration;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

