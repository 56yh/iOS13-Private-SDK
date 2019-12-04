//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSString;

@interface MMElement : NSObject
{
    NSMutableArray *_innerRanges;
    NSMutableArray *_children;
    int _type;
    long long _alignment;
    unsigned long long _level;
    NSString *_href;
    NSString *_title;
    NSString *_identifier;
    NSString *_stringValue;
    MMElement *_parent;
    NSString *_language;
    struct _NSRange _range;
}

@property(copy, nonatomic) NSString *language; // @synthesize language=_language;
@property(copy, nonatomic) NSArray *children; // @synthesize children=_children;
@property(nonatomic) __weak MMElement *parent; // @synthesize parent=_parent;
@property(copy, nonatomic) NSString *stringValue; // @synthesize stringValue=_stringValue;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *href; // @synthesize href=_href;
@property(nonatomic) unsigned long long level; // @synthesize level=_level;
@property(nonatomic) long long alignment; // @synthesize alignment=_alignment;
@property(copy, nonatomic) NSArray *innerRanges; // @synthesize innerRanges=_innerRanges;
@property(nonatomic) int type; // @synthesize type=_type;
@property(nonatomic) struct _NSRange range; // @synthesize range=_range;
- (id)removeLastChild;
- (void)removeChild:(id)arg1;
- (void)addChild:(id)arg1;
- (void)removeLastInnerRange;
- (void)addInnerRange:(struct _NSRange)arg1;
- (id)description;
- (void)dealloc;
- (id)init;

@end

