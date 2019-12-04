//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class NSArray, NSAttributedString, NSDictionary, NSMutableAttributedString, TTTextStorage;

@protocol TTTextStorageStyler 
- (void)resetGuessedFontSizes;
- (void)guessFontSizeThresholdsForTTStylesInAttributedString:(NSAttributedString *)arg1;
- (NSDictionary *)styleForModelAttributes:(NSDictionary *)arg1;
- (NSDictionary *)modelForStyleAttributes:(NSDictionary *)arg1 filterAttributes:(_Bool)arg2;
- (void)styleText:(TTTextStorage *)arg1 inRange:(struct _NSRange)arg2 fixModelAttributes:(_Bool)arg3;

@optional
- (void)convertNSTablesToICTables:(NSMutableAttributedString *)arg1 pasteboardTypes:(NSArray *)arg2 filterPastedAttributes:(_Bool)arg3 isReadingSelectionFromPasteboard:(_Bool)arg4;
@end

