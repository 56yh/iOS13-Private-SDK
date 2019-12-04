//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface OCDSummary : NSObject
{
    NSString *mTitle;
    NSString *mAuthor;
    NSString *mKeywords;
    NSString *mComments;
    NSString *mHyperlinkBase;
    NSString *_subject;
    NSString *_company;
}

@property(retain) NSString *company; // @synthesize company=_company;
@property(retain) NSString *subject; // @synthesize subject=_subject;
- (void)setHyperlinkBase:(id)arg1;
- (id)hyperlinkBase;
- (void)setComments:(id)arg1;
- (id)comments;
- (void)setKeywords:(id)arg1;
- (id)keywords;
- (void)setAuthor:(id)arg1;
- (id)author;
- (void)setTitle:(id)arg1;
- (id)title;

@end

