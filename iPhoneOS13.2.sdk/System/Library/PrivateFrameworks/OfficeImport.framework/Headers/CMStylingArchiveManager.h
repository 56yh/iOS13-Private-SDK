//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <OfficeImport/CMArchiveManager.h>

@class NSMutableDictionary, NSMutableString;

__attribute__((visibility("hidden")))
@interface CMStylingArchiveManager : CMArchiveManager
{
    NSMutableString *mCssString;
    NSMutableDictionary *mStyleCache;
}

- (id)cssStylesheetString;
- (id)commitStylesheet;
- (void)addCssStyle:(id)arg1 withName:(id)arg2;
- (id)addCssStyle:(id)arg1;
- (id)init;

@end

