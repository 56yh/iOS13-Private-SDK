//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXDataSection.h>

@class NSArray;

@interface PXArrayDataSection : PXDataSection
{
    NSArray *_sectionContent;
}

@property(readonly, copy, nonatomic) NSArray *sectionContent; // @synthesize sectionContent=_sectionContent;
// - (void).cxx_destruct;
- (long long)validatedIndexOfObject:(id)arg1 hintIndex:(long long)arg2;
- (long long)indexOfObject:(id)arg1;
- (NSUInteger)countByEnumeratingWithState:(CDStruct_70511ce9 )arg1 objects:(id )arg2 count:(NSUInteger)arg3;
- (id)objectAtIndex:(long long)arg1;
- (long long)count;
- (id)initWithOutlineObject:(id)arg1;
- (id)initWithSectionContent:(id)arg1;
- (id)initWithOutlineObject:(id)arg1 sectionContent:(id)arg2;

@end

