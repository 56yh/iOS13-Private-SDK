//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Network/NWBrowseDescriptor.h>

@class NSString;

@interface NWBonjourBrowseDescriptor : NWBrowseDescriptor
{
}

+ (id)descriptorWithType:(id)arg1 domain:(id)arg2;
+ (unsigned int)descriptorType;
@property(readonly, nonatomic) NSString *domain;
@property(readonly, nonatomic) NSString *type;
- (id)descriptionWithIndent:(int)arg1 showFullContent:(BOOL)arg2;

@end
