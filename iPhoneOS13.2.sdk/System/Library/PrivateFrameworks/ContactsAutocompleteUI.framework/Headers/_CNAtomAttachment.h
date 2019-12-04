//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/NSTextAttachment.h>

@class _CNAtomLayoutView;

@interface _CNAtomAttachment : NSTextAttachment
{
    _CNAtomLayoutView *_atomView;
    id _representedObject;
}

+ (id)attachmentWithAtomLayoutView:(id)arg1 representedObject:(id)arg2;
@property(readonly, nonatomic) id representedObject; // @synthesize representedObject=_representedObject;
@property(readonly, nonatomic) _CNAtomLayoutView *atomView; // @synthesize atomView=_atomView;
- (struct CGRect)attachmentBoundsForTextContainer:(id)arg1 proposedLineFragment:(struct CGRect)arg2 glyphPosition:(struct CGPoint)arg3 characterIndex:(unsigned long long)arg4;
- (id)imageForBounds:(struct CGRect)arg1 textContainer:(id)arg2 characterIndex:(unsigned long long)arg3;
- (id)initWithAtomLayoutView:(id)arg1 representedObject:(id)arg2;

@end
