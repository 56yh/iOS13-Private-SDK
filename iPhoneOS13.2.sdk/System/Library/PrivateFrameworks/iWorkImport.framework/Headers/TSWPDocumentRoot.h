//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
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
    _Bool _didRemoveMissingAttachments;
    id <TSWPTOCController> _tocController;
}

@property(readonly, nonatomic) id <TSWPTOCController> tocController; // @synthesize tocController=_tocController;
@property(nonatomic) _Bool didRemoveMissingAttachments; // @synthesize didRemoveMissingAttachments=_didRemoveMissingAttachments;
- (_Bool)isMasterInfo:(id)arg1;
- (_Bool)isSectionModel:(id)arg1;
- (double)bodyWidth;
- (void)fontUpdatedForStyleClient:(id)arg1;
- (_Bool)textIsVerticalInStorage:(id)arg1 atCharIndex:(unsigned long long)arg2;
- (id)documentId;
@property(readonly, nonatomic) _Bool supportHeaderFooterParagraphAlignmentInInspectors;
- (int)verticalAlignmentForTextStorage:(id)arg1;
- (int)fullyJustifiedAlignmentAtCharIndex:(unsigned long long)arg1 inTextStorage:(id)arg2;
- (int)naturalAlignmentAtCharIndex:(unsigned long long)arg1 inTextStorage:(id)arg2;
@property(readonly, nonatomic, getter=isChangeTrackingEnabled) _Bool changeTrackingEnabled;
- (_Bool)isDrawableOnPageMaster:(id)arg1;
- (id)flowInfoContainer;
@property(readonly, nonatomic) double stickyCommentScaleMultiplier;
- (_Bool)cellCommentsAllowedOnInfo:(id)arg1;
@property(readonly, nonatomic) EQKitEnvironment *equationEnvironment;
- (id)unavailableDocumentFonts;
- (id)documentTSWPFontObjects;
- (id)documentFonts;
- (id)p_fontsInStylesheetUsingBlock:(id /* block */)arg1;
@property(readonly, nonatomic) TSULocale *typesettingLocale;
- (_Bool)containsVerticalText;
- (_Bool)useLigatures;
- (const struct __CFLocale *)hyphenationLocale;
- (_Bool)shouldHyphenate;
@property(nonatomic) _Bool laysOutBodyVertically;
- (_Bool)isIgnoringWord:(id)arg1;
- (void)removeIgnoredWord:(id)arg1;
- (void)addIgnoredWord:(id)arg1;
- (id)ignoredWords;
- (id)changeVisibility;
- (id)changeSessionManagerForModel:(id)arg1;
- (void)willClose;
- (void)documentDidLoad;
- (_Bool)has_30356142_build;
- (_Bool)validatedLoadFromUnarchiver:(id)arg1;

@end

