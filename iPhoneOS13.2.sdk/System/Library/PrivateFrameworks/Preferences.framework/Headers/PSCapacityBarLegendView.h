//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, PSLegendColorView, UIColor, UILabel;

@interface PSCapacityBarLegendView : UIView
{
    PSLegendColorView *_legendColor;
    UILabel *_legendLabel;
}

@property(retain, nonatomic) UIColor *color;
@property(retain, nonatomic) NSString *text;
@property(retain, nonatomic) UIColor *textColor;
- (void)createConstraints;
- (id)initWithCapacityBarCategory:(id)arg1;

@end

