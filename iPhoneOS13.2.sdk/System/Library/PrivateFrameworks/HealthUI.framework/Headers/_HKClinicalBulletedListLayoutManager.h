//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/NSLayoutManager.h>

@class NSAttributedString;

@interface _HKClinicalBulletedListLayoutManager : NSLayoutManager
{
    struct CGSize _bulletSize;
    NSAttributedString *_bullet;
}

@property(copy, nonatomic) NSAttributedString *bullet; // @synthesize bullet=_bullet;
- (void)drawGlyphsForGlyphRange:(struct _NSRange)arg1 atPoint:(struct CGPoint)arg2;

@end

