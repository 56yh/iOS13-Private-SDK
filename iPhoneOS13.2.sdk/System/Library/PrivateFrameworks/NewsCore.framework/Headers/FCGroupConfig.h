//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FCColor, FCColorGradient, NSArray, NSDictionary, NSString;

@interface FCGroupConfig : NSObject
{
    FCColor *_groupTitleColor;
    FCColor *_groupDarkStyleTitleColor;
    NSArray *_groupFonts;
    unsigned long long _cutoffTimeSecs;
    unsigned long long _cutoffCount;
    FCColorGradient *_groupBackgroundColorGradient;
    FCColorGradient *_groupDarkStyleBackgroundColorGradient;
    NSDictionary *_dictionary;
    NSDictionary *_articleMetadataByArticleID;
}

@property(retain, nonatomic) NSDictionary *articleMetadataByArticleID; // @synthesize articleMetadataByArticleID=_articleMetadataByArticleID;
@property(retain, nonatomic) NSDictionary *dictionary; // @synthesize dictionary=_dictionary;
@property(retain, nonatomic) FCColorGradient *groupDarkStyleBackgroundColorGradient; // @synthesize groupDarkStyleBackgroundColorGradient=_groupDarkStyleBackgroundColorGradient;
@property(retain, nonatomic) FCColorGradient *groupBackgroundColorGradient; // @synthesize groupBackgroundColorGradient=_groupBackgroundColorGradient;
@property(nonatomic) unsigned long long cutoffCount; // @synthesize cutoffCount=_cutoffCount;
@property(nonatomic) unsigned long long cutoffTimeSecs; // @synthesize cutoffTimeSecs=_cutoffTimeSecs;
@property(retain, nonatomic) NSArray *groupFonts; // @synthesize groupFonts=_groupFonts;
@property(retain, nonatomic) FCColor *groupDarkStyleTitleColor; // @synthesize groupDarkStyleTitleColor=_groupDarkStyleTitleColor;
@property(retain, nonatomic) FCColor *groupTitleColor; // @synthesize groupTitleColor=_groupTitleColor;
@property(readonly, nonatomic) NSString *feedID;
@property(readonly, nonatomic) NSString *channelID;
@property(readonly, nonatomic) NSString *sectionID;
@property(readonly, nonatomic) NSString *groupActionURLString;
@property(readonly, nonatomic) NSString *groupActionTitle;
@property(readonly, nonatomic) double groupTitleFontTrackingiPad;
@property(readonly, nonatomic) double groupTitleFontTracking;
@property(readonly, nonatomic) double groupTitleFontSizeiPad;
@property(readonly, nonatomic) double groupTitleOffsetHeightiPad;
@property(readonly, nonatomic) double groupTitleOffsetHeight;
@property(readonly, nonatomic) double groupTitleOffsetYiPad;
@property(readonly, nonatomic) double groupTitleOffsetY;
@property(readonly, nonatomic) double groupTitleFontSize;
@property(readonly, nonatomic) NSString *groupTitleFontName;
@property(readonly, nonatomic) NSString *groupSubtitle;
@property(readonly, nonatomic) NSString *groupName;
@property(readonly, nonatomic) NSString *articleListID;
- (id)initWithDictionary:(id)arg1;

@end
