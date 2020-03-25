//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSKDocumentRoot.h>

#import <iWorkImport/TSWPObjectIndex-Protocol.h>

@class EQKitEnvironment, NSMutableSet, NSUUID, TSULocale;
@protocol TSWPTOCController;

__attribute__((visibility("hidden")))
@interface TSWPDocumentRoot : TSKDocumentRoot <TSWPObjectIndex>
{
    NSUUID *_uuid;
    NSMutableSet *_ignoredWords;
    BOOL _didRemoveMissingAttachments;
    id <TSWPTOCController> _tocController;
}

@property(readonly, nonatomic) id <TSWPTOCController> tocController; // @synthesize tocController=_tocController;
@property(nonatomic) BOOL didRemoveMissingAttachments; // @synthesize didRemoveMissingAttachments=_didRemoveMissingAttachments;
// - (void).cxx_destruct;
- (BOOL)isMasterInfo:(id)arg1;
- (BOOL)isSectionModel:(id)arg1;
- (double)bodyWidth;
- (void)fontUpdatedForStyleClient:(id)arg1;
- (BOOL)textIsVerticalInStorage:(id)arg1 atCharIndex:(NSUInteger)arg2;
- (id)documentId;
@property(readonly, nonatomic) BOOL supportHeaderFooterParagraphAlignmentInInspectors;
- (int)verticalAlignmentForTextStorage:(id)arg1;
- (int)fullyJustifiedAlignmentAtCharIndex:(NSUInteger)arg1 inTextStorage:(id)arg2;
- (int)naturalAlignmentAtCharIndex:(NSUInteger)arg1 inTextStorage:(id)arg2;
@property(readonly, nonatomic, getter=isChangeTrackingEnabled) BOOL changeTrackingEnabled;
- (BOOL)isDrawableOnPageMaster:(id)arg1;
- (id)flowInfoContainer;
@property(readonly, nonatomic) double stickyCommentScaleMultiplier;
- (BOOL)cellCommentsAllowedOnInfo:(id)arg1;
@property(readonly, nonatomic) EQKitEnvironment *equationEnvironment;
- (id)unavailableDocumentFonts;
- (id)documentTSWPFontObjects;
- (id)documentFonts;
- (id)p_fontsInStylesheetUsingBlock:(id /* CDUnknownBlockType */)arg1;
@property(readonly, nonatomic) TSULocale *typesettingLocale;
- (BOOL)containsVerticalText;
- (BOOL)useLigatures;
- (const struct __CFLocale )hyphenationLocale;
- (BOOL)shouldHyphenate;
@property(nonatomic) BOOL laysOutBodyVertically;
- (BOOL)isIgnoringWord:(id)arg1;
- (void)removeIgnoredWord:(id)arg1;
- (void)addIgnoredWord:(id)arg1;
- (id)ignoredWords;
- (id)changeVisibility;
- (id)changeSessionManagerForModel:(id)arg1;
- (void)willClose;
- (void)documentDidLoad;
- (BOOL)has_30356142_build;
- (BOOL)validatedLoadFromUnarchiver:(id)arg1;

@end
