#ifndef __GEO_H__
#define __GEO_H__

void geoEncodeCommand(redisClient *c);
void geoDecodeCommand(redisClient *c);
void geoRadiusByMemberCommand(redisClient *c);
void geoRadiusCommand(redisClient *c);
void geoAddCommand(redisClient *c);

#endif
