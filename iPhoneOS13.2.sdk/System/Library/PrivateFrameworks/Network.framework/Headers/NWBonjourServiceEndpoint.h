//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Network/NWEndpoint.h>

@class NSString;

@interface NWBonjourServiceEndpoint : NWEndpoint
{
}

+ (id)endpointWithName:(id)arg1 type:(id)arg2 domain:(id)arg3;
+ (unsigned int)endpointType;
@property(readonly, nonatomic) NSString *domain;
@property(readonly, nonatomic) NSString *type;
@property(readonly, nonatomic) NSString *name;
- (id)descriptionWithIndent:(int)arg1 showFullContent:(_Bool)arg2;

@end

