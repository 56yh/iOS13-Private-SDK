//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary;

@interface NTNewsTodayResultsSourceFetchHelper : NSObject
{
    NSMutableArray *_sectionQueueDescriptors;
    NSMutableDictionary *_remainingSectionsBySectionQueueDescriptors;
}

@property(retain, nonatomic) NSMutableDictionary *remainingSectionsBySectionQueueDescriptors; // @synthesize remainingSectionsBySectionQueueDescriptors=_remainingSectionsBySectionQueueDescriptors;
@property(retain, nonatomic) NSMutableArray *sectionQueueDescriptors; // @synthesize sectionQueueDescriptors=_sectionQueueDescriptors;
- (void)removeSectionDescriptors:(id)arg1;
- (id)sectionDescriptorsAtHeadsOfQueues;
- (id)initWithSectionQueueDescriptors:(id)arg1;
- (id)init;

@end

