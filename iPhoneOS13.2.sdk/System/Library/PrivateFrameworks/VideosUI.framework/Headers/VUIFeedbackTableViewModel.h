//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, VUILabel;

__attribute__((visibility("hidden")))
@interface VUIFeedbackTableViewModel : NSObject
{
    VUILabel *_headerTextView;
    NSArray *_descriptionTextView;
}

+ (id)descriptionTextViewWithString:(id)arg1 layout:(id)arg2 existingView:(id)arg3;
+ (id)headerViewWithString:(id)arg1 layout:(id)arg2 existingView:(id)arg3;
@property(retain, nonatomic) NSArray *descriptionTextView; // @synthesize descriptionTextView=_descriptionTextView;
@property(retain, nonatomic) VUILabel *headerTextView; // @synthesize headerTextView=_headerTextView;

@end

