//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUICore/PXSectionedDataSource.h>

@class NSArray;

@interface PXGadgetDataSource : PXSectionedDataSource
{
    NSArray *_gadgets;
}

@property(readonly, copy, nonatomic) NSArray *gadgets; // @synthesize gadgets=_gadgets;
@property(readonly) _Bool hasNoContentGadget;
- (id)gadgetWithId:(id)arg1;
- (id)gadgetsOfClass:(Class)arg1;
- (id)gadgetsOfType:(unsigned long long)arg1;
- (struct PXSimpleIndexPath)indexPathForGadget:(id)arg1;
- (id)gadgetAtIndexPath:(struct PXSimpleIndexPath)arg1;
- (id)objectAtIndexPath:(struct PXSimpleIndexPath)arg1;
- (long long)numberOfSubitemsInItem:(long long)arg1 section:(long long)arg2;
- (long long)numberOfItemsInSection:(long long)arg1;
- (long long)numberOfSections;
- (id)init;
- (id)initWithGadgets:(id)arg1;

@end

