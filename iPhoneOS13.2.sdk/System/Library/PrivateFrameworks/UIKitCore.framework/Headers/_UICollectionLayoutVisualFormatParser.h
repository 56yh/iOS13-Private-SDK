//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface _UICollectionLayoutVisualFormatParser : NSObject
{
    int _axis;
    NSString *_visualFormat;
    NSString *_name;
    NSArray *_items;
}

+ (int)axisForVisualFormat:(id)arg1;
+ (id)parsersWithVisualFormats:(id)arg1 seperatedByDelimiter:(id)arg2;
+ (id)parserWithVisualFormat:(id)arg1;
@property(copy, nonatomic) NSArray *items; // @synthesize items=_items;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) int axis; // @synthesize axis=_axis;
@property(copy, nonatomic) NSString *visualFormat; // @synthesize visualFormat=_visualFormat;
- (void)_parse;
- (id)description;
- (id)initWithVisualFormat:(id)arg1;

@end

