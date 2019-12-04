//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsCore/FCSpecialEventArticleProviding-Protocol.h>
#import <NewsCore/FCSpecialEventItemProviding-Protocol.h>
#import <NewsCore/FCSpecialEventWebEmbedProviding-Protocol.h>

@class NSDate, NSString;
@protocol FCSpecialEventArticleProviding, FCSpecialEventWebEmbedProviding;

@interface FCSpecialEventItem : NSObject <FCSpecialEventItemProviding, FCSpecialEventArticleProviding, FCSpecialEventWebEmbedProviding>
{
    unsigned long long _itemType;
    NSString *_title;
    NSString *_actionTitle;
    NSString *_actionUrlString;
    NSString *_articleID;
    NSString *_urlString;
    NSString *_storyType;
    NSDate *_displayDate;
}

+ (id)itemWithArticleDict:(id)arg1;
+ (id)itemWithItemDict:(id)arg1;
+ (id)itemWithUrlString:(id)arg1 title:(id)arg2 actionTitle:(id)arg3 actionUrlString:(id)arg4;
+ (id)itemWithArticleID:(id)arg1 title:(id)arg2 actionTitle:(id)arg3 actionUrlString:(id)arg4 storyType:(id)arg5 displayDate:(id)arg6;
@property(readonly, copy, nonatomic) NSDate *displayDate; // @synthesize displayDate=_displayDate;
@property(readonly, copy, nonatomic) NSString *storyType; // @synthesize storyType=_storyType;
@property(readonly, copy, nonatomic) NSString *urlString; // @synthesize urlString=_urlString;
@property(readonly, copy, nonatomic) NSString *articleID; // @synthesize articleID=_articleID;
@property(readonly, copy, nonatomic) NSString *actionUrlString; // @synthesize actionUrlString=_actionUrlString;
@property(readonly, copy, nonatomic) NSString *actionTitle; // @synthesize actionTitle=_actionTitle;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) unsigned long long itemType; // @synthesize itemType=_itemType;
@property(readonly, nonatomic) id <FCSpecialEventWebEmbedProviding> asWebEmbed;
@property(readonly, nonatomic) id <FCSpecialEventArticleProviding> asArticle;
@property(readonly, copy, nonatomic) NSString *identifier;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSpecialEventItemType:(unsigned long long)arg1 title:(id)arg2 actionTitle:(id)arg3 actionUrlString:(id)arg4 articleID:(id)arg5 urlString:(id)arg6 storyType:(id)arg7 displayDate:(id)arg8;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

