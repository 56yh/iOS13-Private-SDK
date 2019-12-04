//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IMChatTranscriptLayoutSpecification, NSArray, NSMutableArray;
@protocol IMChatTranscriptLayoutEngineDataSource;

@interface IMChatTranscriptLayoutEngine : NSObject
{
    NSMutableArray *_cachedDrawables;
    id <IMChatTranscriptLayoutEngineDataSource> _dataSource;
    IMChatTranscriptLayoutSpecification *_layoutSpecification;
    NSArray *_layoutAttributes;
    struct CGSize _contentSize;
}

@property(copy, nonatomic) NSArray *layoutAttributes; // @synthesize layoutAttributes=_layoutAttributes;
@property(nonatomic) struct CGSize contentSize; // @synthesize contentSize=_contentSize;
@property(retain, nonatomic) IMChatTranscriptLayoutSpecification *layoutSpecification; // @synthesize layoutSpecification=_layoutSpecification;
@property(nonatomic) __weak id <IMChatTranscriptLayoutEngineDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void)_updateContentSize;
- (void)_invalidateCachedItemData;
- (unsigned long long)_numberOfTranscriptItems;
- (id)_makeDrawableForTranscriptItem:(id)arg1;
- (id)_cachedDrawableAtIndexOrNil:(unsigned long long)arg1;
- (id)_cachedDrawableForTranscriptItem:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)removeItemsAtIndexPaths:(id)arg1 insertItemsAtIndexPaths:(id)arg2;
- (id)drawableAtIndex:(unsigned long long)arg1;
- (void)invalidateLayout;
- (double)_spaceForVerticalSpaceDescriptor:(long long)arg1;
- (void)_updateFrames;
- (void)_buildLayoutAttributesIfNeeded;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (void)prepareLayout;
- (void)reloadData;
- (id)init;

@end

