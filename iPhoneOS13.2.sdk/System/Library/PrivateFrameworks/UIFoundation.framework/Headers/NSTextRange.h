//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol NSTextLocation;

@interface NSTextRange : NSObject
{
    id <NSTextLocation> _location;
    id <NSTextLocation> _terminator;
}

@property(readonly) id <NSTextLocation> terminator; // @synthesize terminator=_terminator;
@property(readonly) id <NSTextLocation> location; // @synthesize location=_location;
- (id)endLocation;
- (id)startLocation;
- (id)initWithStartLocation:(id)arg1 endLocation:(id)arg2;
- (id)textRangeByFormingUnionWithTextRange:(id)arg1;
- (id)textRangeByIntersectingWithTextRange:(id)arg1;
- (_Bool)intersectsWithTextRange:(id)arg1;
- (_Bool)containsLocation:(id)arg1;
- (_Bool)isEqualToTextRange:(id)arg1;
@property(readonly, getter=isEmpty) _Bool empty;
- (void)dealloc;
- (id)initWithLocation:(id)arg1;
- (id)initWithLocation:(id)arg1 terminator:(id)arg2;

@end

