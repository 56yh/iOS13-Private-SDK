//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsCore/FCSingleTagFeedDescriptor.h>

@interface FCTestFeedDescriptor : FCSingleTagFeedDescriptor
{
    BOOL _disableGroupMerging;
    BOOL _disableFiltering;
    BOOL _enableSingletonGroups;
}

+ (id)descriptorWithContext:(id)arg1 tag:(id)arg2;
+ (id)descriptorWithContext:(id)arg1;
@property(nonatomic) BOOL enableSingletonGroups; // @synthesize enableSingletonGroups=_enableSingletonGroups;
@property(nonatomic) BOOL disableFiltering; // @synthesize disableFiltering=_disableFiltering;
@property(nonatomic) BOOL disableGroupMerging; // @synthesize disableGroupMerging=_disableGroupMerging;
- (id)allEmitterClasses;
- (id)feedGroupEmittersWithConfiguration:(id)arg1 forYouConfig:(id)arg2;

@end

