//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>



@class NSMutableArray, NSString;

@interface NUArticleExcerptHTMLStripper : NSObject <NSXMLParserDelegate>
{
    NSString *_strippedString;
    NSMutableArray *_parts;
}

@property(readonly, nonatomic) NSMutableArray *parts; // @synthesize parts=_parts;
@property(readonly, nonatomic) NSString *strippedString; // @synthesize strippedString=_strippedString;
- (id)stripHTMLString:(id)arg1;
- (void)parser:(id)arg1 foundCharacters:(id)arg2;
- (id)initWithHTMLString:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

