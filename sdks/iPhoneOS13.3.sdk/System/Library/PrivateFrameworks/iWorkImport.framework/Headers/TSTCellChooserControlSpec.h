//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSTCellSpec.h>

@class NSArray, TSTPopUpMenuModel;

__attribute__((visibility("hidden")))
@interface TSTCellChooserControlSpec : TSTCellSpec
{
    NSArray *_displayChoices;
    BOOL _startWithFirstItem;
    TSTPopUpMenuModel *_popupModel;
}

+ (id)instanceWithArchive:(const struct CellSpecArchive )arg1 unarchiver:(id)arg2;
+ (id)cellSpecFromTSKFormat:(id)arg1;
+ (id)popupCellSpec:(id)arg1 startWithFirstItem:(BOOL)arg2;
@property(readonly, nonatomic) BOOL startWithFirstItem; // @synthesize startWithFirstItem=_startWithFirstItem;
@property(retain, nonatomic) TSTPopUpMenuModel *popupModel; // @synthesize popupModel=_popupModel;
// - (void).cxx_destruct;
- (void)saveToArchive:(struct CellSpecArchive )arg1 archiver:(id)arg2;
- (id)initWithArchive:(const struct CellSpecArchive )arg1 unarchiver:(id)arg2;
- (id)tskMultipleChoiceListFormat;
- (BOOL)validateFormatAndValue:(id)arg1;
- (id)valueForIndex:(NSUInteger)arg1;
- (id)displayStringAtIndex:(NSUInteger)arg1;
- (NSUInteger)indexForValue:(id)arg1;
- (id)asChooserControlSpec;
@property(readonly, nonatomic) NSArray *displayChoicesForInspector;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
- (int)interactionType;
- (id)initWithPopupModel:(id)arg1 startWithFirstItem:(BOOL)arg2;

@end

