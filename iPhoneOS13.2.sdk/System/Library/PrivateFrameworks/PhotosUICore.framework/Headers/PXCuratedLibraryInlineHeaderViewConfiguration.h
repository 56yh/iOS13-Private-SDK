//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>



@class NSString;

@interface PXCuratedLibraryInlineHeaderViewConfiguration : NSObject <NSCopying>
{
    _Bool _swapTitleAndSubtitle;
    unsigned long long _style;
    NSString *_title;
    NSString *_subtitle;
}

@property(readonly, nonatomic) _Bool swapTitleAndSubtitle; // @synthesize swapTitleAndSubtitle=_swapTitleAndSubtitle;
@property(readonly, copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) unsigned long long style; // @synthesize style=_style;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2 swapTitleAndSubtitle:(_Bool)arg3 style:(unsigned long long)arg4;

@end

