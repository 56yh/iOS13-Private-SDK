//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@interface SSFlashView : UIView
{
    unsigned long long _style;
}

+ (double)expectedAnimationDurationForStyle:(unsigned long long)arg1;
+ (id)flashViewForStyle:(unsigned long long)arg1;
+ (Class)_flashViewClass;
@property(nonatomic) unsigned long long style; // @synthesize style=_style;
- (void)flashWithCompletion:(id /* block */)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

