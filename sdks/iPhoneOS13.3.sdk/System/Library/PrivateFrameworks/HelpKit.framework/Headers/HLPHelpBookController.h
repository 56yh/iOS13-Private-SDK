//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HelpKit/HLPRemoteDataController.h>

@class HLPHelpLocale, HLPHelpSectionItem, HLPURLImageCacheController, NSMutableDictionary, NSString, NSURL;

@interface HLPHelpBookController : HLPRemoteDataController
{
    BOOL _hasSectionIcon;
    BOOL _fullBookView;
    long long _contentFormatVersion;
    long long _serverType;
    NSMutableDictionary *_helpItemMap;
    NSString *_contentVersion;
    NSString *_copyrightText;
    NSString *_copyrightTopicIdentifier;
    NSString *_bookId;
    NSString *_topicPathFormat;
    NSString *_remoteSearchPath;
    NSString *_remoteCSSearchIndex;
    NSString *_iconBasePath;
    HLPHelpLocale *_locale;
    NSString *_welcomeTopicIdentifier;
    NSURL *_helpBookURL;
    HLPHelpSectionItem *_rootSectionItem;
    HLPURLImageCacheController *_imageCacheController;
}

@property(retain, nonatomic) HLPURLImageCacheController *imageCacheController; // @synthesize imageCacheController=_imageCacheController;
@property(retain, nonatomic) HLPHelpSectionItem *rootSectionItem; // @synthesize rootSectionItem=_rootSectionItem;
@property(retain, nonatomic) NSURL *helpBookURL; // @synthesize helpBookURL=_helpBookURL;
@property(retain, nonatomic) NSString *welcomeTopicIdentifier; // @synthesize welcomeTopicIdentifier=_welcomeTopicIdentifier;
@property(retain, nonatomic) HLPHelpLocale *locale; // @synthesize locale=_locale;
@property(retain, nonatomic) NSString *iconBasePath; // @synthesize iconBasePath=_iconBasePath;
@property(retain, nonatomic) NSString *remoteCSSearchIndex; // @synthesize remoteCSSearchIndex=_remoteCSSearchIndex;
@property(retain, nonatomic) NSString *remoteSearchPath; // @synthesize remoteSearchPath=_remoteSearchPath;
@property(retain, nonatomic) NSString *topicPathFormat; // @synthesize topicPathFormat=_topicPathFormat;
@property(retain, nonatomic) NSString *bookId; // @synthesize bookId=_bookId;
@property(retain, nonatomic) NSString *copyrightTopicIdentifier; // @synthesize copyrightTopicIdentifier=_copyrightTopicIdentifier;
@property(retain, nonatomic) NSString *copyrightText; // @synthesize copyrightText=_copyrightText;
@property(retain, nonatomic) NSString *contentVersion; // @synthesize contentVersion=_contentVersion;
@property(retain, nonatomic) NSMutableDictionary *helpItemMap; // @synthesize helpItemMap=_helpItemMap;
@property(nonatomic) BOOL fullBookView; // @synthesize fullBookView=_fullBookView;
@property(nonatomic) BOOL hasSectionIcon; // @synthesize hasSectionIcon=_hasSectionIcon;
@property(nonatomic) long long serverType; // @synthesize serverType=_serverType;
@property(nonatomic) long long contentFormatVersion; // @synthesize contentFormatVersion=_contentFormatVersion;
// - (void).cxx_destruct;
- (id)welcomeTopicItem;
- (id)copyrightTopicItem;
- (id)helpItemForID:(id)arg1;
- (void)addAsideTopic:(id)arg1;
- (id)helpTopicItemForName:(id)arg1;
- (id)helpTopicItemForID:(id)arg1;
- (id)sectionsForChildrenIdentifiers:(id)arg1 level:(long long)arg2 parent:(id)arg3 sectionsMap:(id)arg4 topicsMap:(id)arg5;
- (id)dynamicServerSectionsForIdentifiers:(id)arg1 level:(long long)arg2 parent:(id)arg3 tocMap:(id)arg4;
- (void)processData:(id)arg1 formattedData:(id)arg2;
- (void)processFileURLWithCompletionHandler:(id /* CDUnknownBlockType */)arg1;
- (void)fetchDataWithDataType:(long long)arg1 identifier:(id)arg2 completionHandler:(id /* CDUnknownBlockType */)arg3;
@property(readonly, nonatomic, getter=isSemanticHTML) BOOL semanticHTML; // @dynamic semanticHTML;
- (void)dealloc;

@end
