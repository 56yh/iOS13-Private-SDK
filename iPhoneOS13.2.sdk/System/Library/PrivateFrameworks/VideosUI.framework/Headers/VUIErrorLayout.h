//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TVMLKit/TVViewLayout.h>

@class VUITextLayout;

__attribute__((visibility("hidden")))
@interface VUIErrorLayout : TVViewLayout
{
    VUITextLayout *_titleTextLayout;
    VUITextLayout *_descriptionTextLayout;
    VUITextLayout *_debugTextLayout;
    VUITextLayout *_debugTextLayout2;
}

+ (id)layoutWithLayout:(id)arg1 element:(id)arg2;
@property(readonly, nonatomic) VUITextLayout *debugTextLayout2; // @synthesize debugTextLayout2=_debugTextLayout2;
@property(readonly, nonatomic) VUITextLayout *debugTextLayout; // @synthesize debugTextLayout=_debugTextLayout;
@property(readonly, nonatomic) VUITextLayout *descriptionTextLayout; // @synthesize descriptionTextLayout=_descriptionTextLayout;
@property(readonly, nonatomic) VUITextLayout *titleTextLayout; // @synthesize titleTextLayout=_titleTextLayout;
- (id)init;

@end

