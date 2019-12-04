//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXDataTableTextSourceFactory-Protocol.h>

@class NSString;
@protocol SXDocumentLanguageProviding, SXFontAttributesConstructor, SXSmartFieldFactory;

@interface SXDataTableTextSourceFactory : NSObject <SXDataTableTextSourceFactory>
{
    id <SXSmartFieldFactory> _smartFieldFactory;
    id <SXDocumentLanguageProviding> _documentLanguageProvider;
    id <SXFontAttributesConstructor> _fontAttributesConstructor;
}

@property(readonly, nonatomic) id <SXFontAttributesConstructor> fontAttributesConstructor; // @synthesize fontAttributesConstructor=_fontAttributesConstructor;
@property(readonly, nonatomic) id <SXDocumentLanguageProviding> documentLanguageProvider; // @synthesize documentLanguageProvider=_documentLanguageProvider;
@property(readonly, nonatomic) id <SXSmartFieldFactory> smartFieldFactory; // @synthesize smartFieldFactory=_smartFieldFactory;
- (id)textSourceWithFormattedText:(id)arg1 indexPath:(CDStruct_2fea82da)arg2 dataSource:(id)arg3;
- (id)initWithSmartFieldFactory:(id)arg1 documentLanguageProvider:(id)arg2 fontAttributesConstructor:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

