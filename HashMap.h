typedef struct
{
	int key;
	int value;
	struct HashNode* next;
}HashNode;

//将键/值对添加到 hashMap 中
void hashMap_Put(HashNode* node, int key, int value);
//获取指定 key 对应对 value
int hashMap_Get(HashNode* node, int key);
//删除 hashMap 中指定键 key 的映射关系
void hashMap_Remove(HashNode* node, int key);
//检查 hashMap 中是否存在指定的 key 对应的映射关系。
int hashMap_ContainsKey(HashNode* node, int key);
//检查 hashMap 中是否存在指定的 value 对应的映射关系。
int hashMap_ContainsValue(HashNode* node, int value);
//计算 hashMap 中键/值对的数量
int hashMap_MapSize(HashNode* node);