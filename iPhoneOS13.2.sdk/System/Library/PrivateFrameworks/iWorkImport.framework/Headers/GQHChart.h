//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface GQHChart : NSObject
{
}

+ (int)handleInlineChart:(id)arg1 state:(id)arg2;
+ (int)handleFloatingChart:(id)arg1 state:(id)arg2;
+ (id)geometry:(id)arg1;
+ (char *)pdfId:(id)arg1;
+ (int)handleInlineChart:(id)arg1 state:(id)arg2 imageUrl:(struct __CFString *)arg3;
+ (struct __CFString *)createChartImageUrlString:(id)arg1 state:(id)arg2;
+ (struct __CFData *)renderChart:(id)arg1;

@end

