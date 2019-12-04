//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>



@class NSArray, NSDate, NSString;

@interface MWFeedItem : NSObject <NSCoding>
{
    NSString *identifier;
    NSString *title;
    NSString *link;
    NSDate *date;
    NSDate *updated;
    NSString *summary;
    NSString *content;
    NSString *author;
    NSArray *enclosures;
}

@property(copy, nonatomic) NSArray *enclosures; // @synthesize enclosures;
@property(copy, nonatomic) NSString *author; // @synthesize author;
@property(copy, nonatomic) NSString *content; // @synthesize content;
@property(copy, nonatomic) NSString *summary; // @synthesize summary;
@property(copy, nonatomic) NSDate *updated; // @synthesize updated;
@property(copy, nonatomic) NSDate *date; // @synthesize date;
@property(copy, nonatomic) NSString *link; // @synthesize link;
@property(copy, nonatomic) NSString *title; // @synthesize title;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;

@end

