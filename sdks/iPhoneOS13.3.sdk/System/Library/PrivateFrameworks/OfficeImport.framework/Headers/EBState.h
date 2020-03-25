//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class EDResources, EDWorkbook;
@protocol TCCancelDelegate;

__attribute__((visibility("hidden")))
@interface EBState : NSObject
{
    struct XlLinkTable mXlLinkTable;
    struct XlNameTable mXlNameTable;
    ChVector_cc6fdd32 mSheetNames;
    struct XlFormulaProcessor mXlFormulaProcessor;
    EDWorkbook *mWorkbook;
    EDResources *mResources;
    id <TCCancelDelegate> mCancelDelegate;
}

@property(readonly, nonatomic) id <TCCancelDelegate> cancelDelegate; // @synthesize cancelDelegate=mCancelDelegate;
// - (void).cxx_destruct;
- (BOOL)isCancelled;
- (void)setResources:(id)arg1;
- (id)resources;
- (void)setWorkbook:(id)arg1;
- (id)workbook;
- (struct XlFormulaProcessor )xlFormulaProcessor;
- (ChVector_cc6fdd32 )sheetNames;
- (struct XlNameTable )xlNameTable;
- (struct XlLinkTable )xlLinkTable;
- (void)dealloc;
- (id)initWithCancelDelegate:(id)arg1;

@end
